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
    AWS_RDS_API DBClusterSnapshotAttributesResult();
    AWS_RDS_API DBClusterSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline const Aws::Vector<DBClusterSnapshotAttribute>& GetDBClusterSnapshotAttributes() const{ return m_dBClusterSnapshotAttributes; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline bool DBClusterSnapshotAttributesHasBeenSet() const { return m_dBClusterSnapshotAttributesHasBeenSet; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotAttributes(const Aws::Vector<DBClusterSnapshotAttribute>& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = value; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotAttributes(Aws::Vector<DBClusterSnapshotAttribute>&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = std::move(value); }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(const Aws::Vector<DBClusterSnapshotAttribute>& value) { SetDBClusterSnapshotAttributes(value); return *this;}

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(Aws::Vector<DBClusterSnapshotAttribute>&& value) { SetDBClusterSnapshotAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(const DBClusterSnapshotAttribute& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.push_back(value); return *this; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(DBClusterSnapshotAttribute&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::Vector<DBClusterSnapshotAttribute> m_dBClusterSnapshotAttributes;
    bool m_dBClusterSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
