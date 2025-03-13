/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBSnapshotAttribute.h>
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
   * <code>DescribeDBSnapshotAttributes</code> API action.</p> <p>Manual DB snapshot
   * attributes are used to authorize other Amazon Web Services accounts to copy or
   * restore a manual DB snapshot. For more information, see the
   * <code>ModifyDBSnapshotAttribute</code> API action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotAttributesResult">AWS
   * API Reference</a></p>
   */
  class DBSnapshotAttributesResult
  {
  public:
    AWS_RDS_API DBSnapshotAttributesResult() = default;
    AWS_RDS_API DBSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const { return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    template<typename DBSnapshotIdentifierT = Aws::String>
    void SetDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::forward<DBSnapshotIdentifierT>(value); }
    template<typename DBSnapshotIdentifierT = Aws::String>
    DBSnapshotAttributesResult& WithDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { SetDBSnapshotIdentifier(std::forward<DBSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline const Aws::Vector<DBSnapshotAttribute>& GetDBSnapshotAttributes() const { return m_dBSnapshotAttributes; }
    inline bool DBSnapshotAttributesHasBeenSet() const { return m_dBSnapshotAttributesHasBeenSet; }
    template<typename DBSnapshotAttributesT = Aws::Vector<DBSnapshotAttribute>>
    void SetDBSnapshotAttributes(DBSnapshotAttributesT&& value) { m_dBSnapshotAttributesHasBeenSet = true; m_dBSnapshotAttributes = std::forward<DBSnapshotAttributesT>(value); }
    template<typename DBSnapshotAttributesT = Aws::Vector<DBSnapshotAttribute>>
    DBSnapshotAttributesResult& WithDBSnapshotAttributes(DBSnapshotAttributesT&& value) { SetDBSnapshotAttributes(std::forward<DBSnapshotAttributesT>(value)); return *this;}
    template<typename DBSnapshotAttributesT = DBSnapshotAttribute>
    DBSnapshotAttributesResult& AddDBSnapshotAttributes(DBSnapshotAttributesT&& value) { m_dBSnapshotAttributesHasBeenSet = true; m_dBSnapshotAttributes.emplace_back(std::forward<DBSnapshotAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::Vector<DBSnapshotAttribute> m_dBSnapshotAttributes;
    bool m_dBSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
