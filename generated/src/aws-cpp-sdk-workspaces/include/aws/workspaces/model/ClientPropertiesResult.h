/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ClientProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Information about the Amazon WorkSpaces client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ClientPropertiesResult">AWS
   * API Reference</a></p>
   */
  class ClientPropertiesResult
  {
  public:
    AWS_WORKSPACES_API ClientPropertiesResult() = default;
    AWS_WORKSPACES_API ClientPropertiesResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ClientPropertiesResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ClientPropertiesResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline const ClientProperties& GetClientProperties() const { return m_clientProperties; }
    inline bool ClientPropertiesHasBeenSet() const { return m_clientPropertiesHasBeenSet; }
    template<typename ClientPropertiesT = ClientProperties>
    void SetClientProperties(ClientPropertiesT&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = std::forward<ClientPropertiesT>(value); }
    template<typename ClientPropertiesT = ClientProperties>
    ClientPropertiesResult& WithClientProperties(ClientPropertiesT&& value) { SetClientProperties(std::forward<ClientPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ClientProperties m_clientProperties;
    bool m_clientPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
