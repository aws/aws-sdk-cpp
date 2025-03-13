/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune DB cluster parameter group.</p>
   * <p>This data type is used as a response element in the
   * <a>DescribeDBClusterParameterGroups</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBClusterParameterGroup">AWS
   * API Reference</a></p>
   */
  class DBClusterParameterGroup
  {
  public:
    AWS_NEPTUNE_API DBClusterParameterGroup() = default;
    AWS_NEPTUNE_API DBClusterParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBClusterParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const { return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    void SetDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::forward<DBClusterParameterGroupNameT>(value); }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    DBClusterParameterGroup& WithDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { SetDBClusterParameterGroupName(std::forward<DBClusterParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    DBClusterParameterGroup& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DBClusterParameterGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupArn() const { return m_dBClusterParameterGroupArn; }
    inline bool DBClusterParameterGroupArnHasBeenSet() const { return m_dBClusterParameterGroupArnHasBeenSet; }
    template<typename DBClusterParameterGroupArnT = Aws::String>
    void SetDBClusterParameterGroupArn(DBClusterParameterGroupArnT&& value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn = std::forward<DBClusterParameterGroupArnT>(value); }
    template<typename DBClusterParameterGroupArnT = Aws::String>
    DBClusterParameterGroup& WithDBClusterParameterGroupArn(DBClusterParameterGroupArnT&& value) { SetDBClusterParameterGroupArn(std::forward<DBClusterParameterGroupArnT>(value)); return *this;}
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
} // namespace Neptune
} // namespace Aws
