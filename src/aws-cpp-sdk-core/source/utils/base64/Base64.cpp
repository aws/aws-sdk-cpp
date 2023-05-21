/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/base64/Base64.h>

#include <aws/crt/Types.h>
#include <cstring>

using namespace Aws::Utils::Base64;


namespace Aws
{
namespace Utils
{
namespace Base64
{

Base64::Base64(const char *)
{
}

Aws::String Base64::Encode(const Aws::Utils::ByteBuffer& buffer) const
{
    auto toEncodeCur = Crt::ByteCursorFromArray(buffer.GetUnderlyingData(), buffer.GetLength());
    Aws::String retStr;
    //for the null character.
    // to avoid a copy, we want to allocate the string's memory ahead of time so we don't need to copy since base64 is
    // the hot path for data-plane services. We do that by calling "resize" NOT
    // "reserve". If you call reserve, the subsequent resize will overwrite the contents of the string.
    retStr.resize(CalculateBase64EncodedLength(buffer) + 1);
    auto outputBuf = Crt::ByteBufFromEmptyArray((const uint8_t*)retStr.data(), retStr.capacity());
    Crt::UnsafeInteropHelpers::Base64Encode(toEncodeCur, outputBuf);
    retStr.resize(outputBuf.len);
    return retStr;
}

Aws::Utils::ByteBuffer Base64::Decode(const Aws::String& str) const
{
    size_t decodedLength = CalculateBase64DecodedLength(str);
    ByteBuffer retVal(decodedLength);

    auto toDecodeCur = Crt::ByteCursorFromArray((const uint8_t *)str.data(), str.size());
    auto outputBuf = Crt::ByteBufFromEmptyArray(retVal.GetUnderlyingData(), retVal.GetSize());
    Crt::UnsafeInteropHelpers::Base64Decode(toDecodeCur, outputBuf);
    retVal.SetLength(outputBuf.len);

    return retVal;
}

size_t Base64::CalculateBase64DecodedLength(const Aws::String& b64input)
{
    const size_t len = b64input.length();
    if(len < 2)
    {
        return 0;
    }

    size_t padding = 0;

    if (b64input[len - 1] == '=' && b64input[len - 2] == '=') //last two chars are =
        padding = 2;
    else if (b64input[len - 1] == '=') //last char is =
        padding = 1;

    return (len * 3 / 4 - padding);
}

size_t Base64::CalculateBase64EncodedLength(const Aws::Utils::ByteBuffer& buffer)
{
    return 4 * ((buffer.GetLength() + 2) / 3);
}

} // namespace Base64
} // namespace Utils
} // namespace Aws