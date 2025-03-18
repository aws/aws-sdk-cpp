/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>List Connectors Request Filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListConnectorsRequestFilters">AWS
   * API Reference</a></p>
   */
  class ListConnectorsRequestFilters
  {
  public:
    AWS_MGN_API ListConnectorsRequestFilters() = default;
    AWS_MGN_API ListConnectorsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListConnectorsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorIDs() const { return m_connectorIDs; }
    inline bool ConnectorIDsHasBeenSet() const { return m_connectorIDsHasBeenSet; }
    template<typename ConnectorIDsT = Aws::Vector<Aws::String>>
    void SetConnectorIDs(ConnectorIDsT&& value) { m_connectorIDsHasBeenSet = true; m_connectorIDs = std::forward<ConnectorIDsT>(value); }
    template<typename ConnectorIDsT = Aws::Vector<Aws::String>>
    ListConnectorsRequestFilters& WithConnectorIDs(ConnectorIDsT&& value) { SetConnectorIDs(std::forward<ConnectorIDsT>(value)); return *this;}
    template<typename ConnectorIDsT = Aws::String>
    ListConnectorsRequestFilters& AddConnectorIDs(ConnectorIDsT&& value) { m_connectorIDsHasBeenSet = true; m_connectorIDs.emplace_back(std::forward<ConnectorIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_connectorIDs;
    bool m_connectorIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
