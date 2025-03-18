/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/EndpointEncryptionMode.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyEndpointEncryptionModeRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyEndpointEncryptionModeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyEndpointEncryptionMode"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    ModifyEndpointEncryptionModeRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption mode used for endpoint connections when streaming to
     * WorkSpaces Personal or WorkSpace Pools.</p>
     */
    inline EndpointEncryptionMode GetEndpointEncryptionMode() const { return m_endpointEncryptionMode; }
    inline bool EndpointEncryptionModeHasBeenSet() const { return m_endpointEncryptionModeHasBeenSet; }
    inline void SetEndpointEncryptionMode(EndpointEncryptionMode value) { m_endpointEncryptionModeHasBeenSet = true; m_endpointEncryptionMode = value; }
    inline ModifyEndpointEncryptionModeRequest& WithEndpointEncryptionMode(EndpointEncryptionMode value) { SetEndpointEncryptionMode(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    EndpointEncryptionMode m_endpointEncryptionMode{EndpointEncryptionMode::NOT_SET};
    bool m_endpointEncryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
