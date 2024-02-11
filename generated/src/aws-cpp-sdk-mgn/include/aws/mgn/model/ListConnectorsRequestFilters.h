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
    AWS_MGN_API ListConnectorsRequestFilters();
    AWS_MGN_API ListConnectorsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListConnectorsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorIDs() const{ return m_connectorIDs; }

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline bool ConnectorIDsHasBeenSet() const { return m_connectorIDsHasBeenSet; }

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline void SetConnectorIDs(const Aws::Vector<Aws::String>& value) { m_connectorIDsHasBeenSet = true; m_connectorIDs = value; }

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline void SetConnectorIDs(Aws::Vector<Aws::String>&& value) { m_connectorIDsHasBeenSet = true; m_connectorIDs = std::move(value); }

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline ListConnectorsRequestFilters& WithConnectorIDs(const Aws::Vector<Aws::String>& value) { SetConnectorIDs(value); return *this;}

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline ListConnectorsRequestFilters& WithConnectorIDs(Aws::Vector<Aws::String>&& value) { SetConnectorIDs(std::move(value)); return *this;}

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline ListConnectorsRequestFilters& AddConnectorIDs(const Aws::String& value) { m_connectorIDsHasBeenSet = true; m_connectorIDs.push_back(value); return *this; }

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline ListConnectorsRequestFilters& AddConnectorIDs(Aws::String&& value) { m_connectorIDsHasBeenSet = true; m_connectorIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>List Connectors Request Filters connector IDs.</p>
     */
    inline ListConnectorsRequestFilters& AddConnectorIDs(const char* value) { m_connectorIDsHasBeenSet = true; m_connectorIDs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_connectorIDs;
    bool m_connectorIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
