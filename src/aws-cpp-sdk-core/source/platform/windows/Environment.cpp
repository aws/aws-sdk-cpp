/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>

#include <stdio.h>
#include <utility>

namespace Aws
{
namespace Environment
{

Aws::String GetEnv(const char *variableName)
{
#ifdef _MSC_VER
    wchar_t* variableValue = nullptr;
    std::size_t valueSize = 0;
    const auto queryResult = _wdupenv_s(&variableValue, &valueSize, Aws::Utils::StringUtils::ToWString(variableName).c_str());

    Aws::String result;
    if(queryResult == 0 && variableValue != nullptr)
    {
        result = Aws::Utils::StringUtils::FromWString(variableValue);
    }
    free(variableValue);

    return result;
#else
    auto variableValue = std::getenv(variableName);
    return Aws::String( variableValue ? variableValue : "" );
#endif
}

} // namespace Environment
} // namespace Aws
