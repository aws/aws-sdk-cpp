/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class GetHostnameSuggestionRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API GetHostnameSuggestionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostnameSuggestion"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }
    inline GetHostnameSuggestionRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}
    inline GetHostnameSuggestionRequest& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}
    inline GetHostnameSuggestionRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}
    ///@}
  private:

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
