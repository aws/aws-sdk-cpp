
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/stream/AwsStreamBuf.h>
#include <limits>

namespace Aws
{
namespace Utils
{
namespace Stream
{
    const char* AwsStreamBuf::AWS_STREAM_BUF_ALLOC_TAG = "AwsStreamBuf";

    const AwsStreamBuf::int_type AwsStreamBuf::eof = static_cast<AwsStreamBuf::int_type>(EOF);
    AwsStreamBuf::streamsize AwsStreamBuf::MIN_BUFFER_SIZE = 128;
    AwsStreamBuf::streamsize AwsStreamBuf::MAX_BUFFER_SIZE = std::numeric_limits<AwsStreamBuf::streamsize>::max();

}
}
}
