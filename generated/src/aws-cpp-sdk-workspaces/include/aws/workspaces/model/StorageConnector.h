/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/StorageConnectorTypeEnum.h>
#include <aws/workspaces/model/StorageConnectorStatusEnum.h>
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
   * <p>Describes the storage connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StorageConnector">AWS
   * API Reference</a></p>
   */
  class StorageConnector
  {
  public:
    AWS_WORKSPACES_API StorageConnector();
    AWS_WORKSPACES_API StorageConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StorageConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of connector used to save user files.</p>
     */
    inline const StorageConnectorTypeEnum& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const StorageConnectorTypeEnum& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(StorageConnectorTypeEnum&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline StorageConnector& WithConnectorType(const StorageConnectorTypeEnum& value) { SetConnectorType(value); return *this;}
    inline StorageConnector& WithConnectorType(StorageConnectorTypeEnum&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the storage connetor is enabled or disabled.</p>
     */
    inline const StorageConnectorStatusEnum& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StorageConnectorStatusEnum& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StorageConnectorStatusEnum&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StorageConnector& WithStatus(const StorageConnectorStatusEnum& value) { SetStatus(value); return *this;}
    inline StorageConnector& WithStatus(StorageConnectorStatusEnum&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    StorageConnectorTypeEnum m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    StorageConnectorStatusEnum m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
