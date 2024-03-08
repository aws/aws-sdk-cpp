/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class GetConfigurationRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API GetConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguration"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
