/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>

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
namespace SupportApp
{
namespace Model
{
  class DeleteSlackWorkspaceConfigurationResult
  {
  public:
    AWS_SUPPORTAPP_API DeleteSlackWorkspaceConfigurationResult();
    AWS_SUPPORTAPP_API DeleteSlackWorkspaceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API DeleteSlackWorkspaceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
