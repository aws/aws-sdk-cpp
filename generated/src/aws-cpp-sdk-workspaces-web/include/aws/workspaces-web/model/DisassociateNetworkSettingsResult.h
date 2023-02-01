/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

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
namespace WorkSpacesWeb
{
namespace Model
{
  class DisassociateNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API DisassociateNetworkSettingsResult();
    AWS_WORKSPACESWEB_API DisassociateNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API DisassociateNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
