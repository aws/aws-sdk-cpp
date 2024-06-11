﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the details of an Amazon RDS DB cluster parameter group.</p> <p>This
   * data type is used as a response element in the
   * <code>DescribeDBClusterParameterGroups</code> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterParameterGroup">AWS
   * API Reference</a></p>
   */
  class DBClusterParameterGroup
  {
  public:
    AWS_RDS_API DBClusterParameterGroup();
    AWS_RDS_API DBClusterParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }
    inline DBClusterParameterGroup& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}
    inline DBClusterParameterGroup& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}
    inline DBClusterParameterGroup& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group family that this DB cluster parameter
     * group is compatible with.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }
    inline DBClusterParameterGroup& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}
    inline DBClusterParameterGroup& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}
    inline DBClusterParameterGroup& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DBClusterParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DBClusterParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DBClusterParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupArn() const{ return m_dBClusterParameterGroupArn; }
    inline bool DBClusterParameterGroupArnHasBeenSet() const { return m_dBClusterParameterGroupArnHasBeenSet; }
    inline void SetDBClusterParameterGroupArn(const Aws::String& value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn = value; }
    inline void SetDBClusterParameterGroupArn(Aws::String&& value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn = std::move(value); }
    inline void SetDBClusterParameterGroupArn(const char* value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn.assign(value); }
    inline DBClusterParameterGroup& WithDBClusterParameterGroupArn(const Aws::String& value) { SetDBClusterParameterGroupArn(value); return *this;}
    inline DBClusterParameterGroup& WithDBClusterParameterGroupArn(Aws::String&& value) { SetDBClusterParameterGroupArn(std::move(value)); return *this;}
    inline DBClusterParameterGroup& WithDBClusterParameterGroupArn(const char* value) { SetDBClusterParameterGroupArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupArn;
    bool m_dBClusterParameterGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
