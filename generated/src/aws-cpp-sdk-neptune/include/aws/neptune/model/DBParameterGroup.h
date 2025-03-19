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
   * <p>Contains the details of an Amazon Neptune DB parameter group.</p> <p>This
   * data type is used as a response element in the <a>DescribeDBParameterGroups</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBParameterGroup">AWS
   * API Reference</a></p>
   */
  class DBParameterGroup
  {
  public:
    AWS_NEPTUNE_API DBParameterGroup() = default;
    AWS_NEPTUNE_API DBParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const { return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    template<typename DBParameterGroupNameT = Aws::String>
    void SetDBParameterGroupName(DBParameterGroupNameT&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::forward<DBParameterGroupNameT>(value); }
    template<typename DBParameterGroupNameT = Aws::String>
    DBParameterGroup& WithDBParameterGroupName(DBParameterGroupNameT&& value) { SetDBParameterGroupName(std::forward<DBParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    DBParameterGroup& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DBParameterGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupArn() const { return m_dBParameterGroupArn; }
    inline bool DBParameterGroupArnHasBeenSet() const { return m_dBParameterGroupArnHasBeenSet; }
    template<typename DBParameterGroupArnT = Aws::String>
    void SetDBParameterGroupArn(DBParameterGroupArnT&& value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn = std::forward<DBParameterGroupArnT>(value); }
    template<typename DBParameterGroupArnT = Aws::String>
    DBParameterGroup& WithDBParameterGroupArn(DBParameterGroupArnT&& value) { SetDBParameterGroupArn(std::forward<DBParameterGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dBParameterGroupArn;
    bool m_dBParameterGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
