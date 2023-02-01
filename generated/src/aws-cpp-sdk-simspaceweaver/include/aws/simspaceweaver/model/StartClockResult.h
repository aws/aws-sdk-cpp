/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SimSpaceWeaver
{
namespace Model
{
  class StartClockResult
  {
  public:
    AWS_SIMSPACEWEAVER_API StartClockResult();
    AWS_SIMSPACEWEAVER_API StartClockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API StartClockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
