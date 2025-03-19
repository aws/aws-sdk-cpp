/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBClusterSnapshotAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the results of a successful call to the
   * <code>DescribeDBClusterSnapshotAttributes</code> API action.</p> <p>Manual DB
   * cluster snapshot attributes are used to authorize other Amazon Web Services
   * accounts to copy or restore a manual DB cluster snapshot. For more information,
   * see the <code>ModifyDBClusterSnapshotAttribute</code> API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterSnapshotAttributesResult">AWS
   * API Reference</a></p>
   */
  class DBClusterSnapshotAttributesResult
  {
  public:
    AWS_RDS_API DBClusterSnapshotAttributesResult() = default;
    AWS_RDS_API DBClusterSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const { return m_dBClusterSnapshotIdentifier; }
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }
    template<typename DBClusterSnapshotIdentifierT = Aws::String>
    void SetDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::forward<DBClusterSnapshotIdentifierT>(value); }
    template<typename DBClusterSnapshotIdentifierT = Aws::String>
    DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) { SetDBClusterSnapshotIdentifier(std::forward<DBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline const Aws::Vector<DBClusterSnapshotAttribute>& GetDBClusterSnapshotAttributes() const { return m_dBClusterSnapshotAttributes; }
    inline bool DBClusterSnapshotAttributesHasBeenSet() const { return m_dBClusterSnapshotAttributesHasBeenSet; }
    template<typename DBClusterSnapshotAttributesT = Aws::Vector<DBClusterSnapshotAttribute>>
    void SetDBClusterSnapshotAttributes(DBClusterSnapshotAttributesT&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = std::forward<DBClusterSnapshotAttributesT>(value); }
    template<typename DBClusterSnapshotAttributesT = Aws::Vector<DBClusterSnapshotAttribute>>
    DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(DBClusterSnapshotAttributesT&& value) { SetDBClusterSnapshotAttributes(std::forward<DBClusterSnapshotAttributesT>(value)); return *this;}
    template<typename DBClusterSnapshotAttributesT = DBClusterSnapshotAttribute>
    DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(DBClusterSnapshotAttributesT&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.emplace_back(std::forward<DBClusterSnapshotAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::Vector<DBClusterSnapshotAttribute> m_dBClusterSnapshotAttributes;
    bool m_dBClusterSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
