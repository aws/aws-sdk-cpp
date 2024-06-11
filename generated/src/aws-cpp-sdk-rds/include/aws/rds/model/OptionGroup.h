/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/Option.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroup">AWS API
   * Reference</a></p>
   */
  class OptionGroup
  {
  public:
    AWS_RDS_API OptionGroup();
    AWS_RDS_API OptionGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline OptionGroup& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline OptionGroup& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline OptionGroup& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a description of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupDescription() const{ return m_optionGroupDescription; }
    inline bool OptionGroupDescriptionHasBeenSet() const { return m_optionGroupDescriptionHasBeenSet; }
    inline void SetOptionGroupDescription(const Aws::String& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = value; }
    inline void SetOptionGroupDescription(Aws::String&& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = std::move(value); }
    inline void SetOptionGroupDescription(const char* value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription.assign(value); }
    inline OptionGroup& WithOptionGroupDescription(const Aws::String& value) { SetOptionGroupDescription(value); return *this;}
    inline OptionGroup& WithOptionGroupDescription(Aws::String&& value) { SetOptionGroupDescription(std::move(value)); return *this;}
    inline OptionGroup& WithOptionGroupDescription(const char* value) { SetOptionGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }
    inline OptionGroup& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}
    inline OptionGroup& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}
    inline OptionGroup& WithEngineName(const char* value) { SetEngineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }
    inline OptionGroup& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}
    inline OptionGroup& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}
    inline OptionGroup& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline const Aws::Vector<Option>& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::Vector<Option>& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::Vector<Option>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline OptionGroup& WithOptions(const Aws::Vector<Option>& value) { SetOptions(value); return *this;}
    inline OptionGroup& WithOptions(Aws::Vector<Option>&& value) { SetOptions(std::move(value)); return *this;}
    inline OptionGroup& AddOptions(const Option& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    inline OptionGroup& AddOptions(Option&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances.</p>
     */
    inline bool GetAllowsVpcAndNonVpcInstanceMemberships() const{ return m_allowsVpcAndNonVpcInstanceMemberships; }
    inline bool AllowsVpcAndNonVpcInstanceMembershipsHasBeenSet() const { return m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet; }
    inline void SetAllowsVpcAndNonVpcInstanceMemberships(bool value) { m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = true; m_allowsVpcAndNonVpcInstanceMemberships = value; }
    inline OptionGroup& WithAllowsVpcAndNonVpcInstanceMemberships(bool value) { SetAllowsVpcAndNonVpcInstanceMemberships(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline OptionGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline OptionGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline OptionGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline const Aws::String& GetOptionGroupArn() const{ return m_optionGroupArn; }
    inline bool OptionGroupArnHasBeenSet() const { return m_optionGroupArnHasBeenSet; }
    inline void SetOptionGroupArn(const Aws::String& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = value; }
    inline void SetOptionGroupArn(Aws::String&& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = std::move(value); }
    inline void SetOptionGroupArn(const char* value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn.assign(value); }
    inline OptionGroup& WithOptionGroupArn(const Aws::String& value) { SetOptionGroupArn(value); return *this;}
    inline OptionGroup& WithOptionGroupArn(Aws::String&& value) { SetOptionGroupArn(std::move(value)); return *this;}
    inline OptionGroup& WithOptionGroupArn(const char* value) { SetOptionGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline const Aws::String& GetSourceOptionGroup() const{ return m_sourceOptionGroup; }
    inline bool SourceOptionGroupHasBeenSet() const { return m_sourceOptionGroupHasBeenSet; }
    inline void SetSourceOptionGroup(const Aws::String& value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup = value; }
    inline void SetSourceOptionGroup(Aws::String&& value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup = std::move(value); }
    inline void SetSourceOptionGroup(const char* value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup.assign(value); }
    inline OptionGroup& WithSourceOptionGroup(const Aws::String& value) { SetSourceOptionGroup(value); return *this;}
    inline OptionGroup& WithSourceOptionGroup(Aws::String&& value) { SetSourceOptionGroup(std::move(value)); return *this;}
    inline OptionGroup& WithSourceOptionGroup(const char* value) { SetSourceOptionGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline const Aws::String& GetSourceAccountId() const{ return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    inline void SetSourceAccountId(const Aws::String& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = value; }
    inline void SetSourceAccountId(Aws::String&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::move(value); }
    inline void SetSourceAccountId(const char* value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId.assign(value); }
    inline OptionGroup& WithSourceAccountId(const Aws::String& value) { SetSourceAccountId(value); return *this;}
    inline OptionGroup& WithSourceAccountId(Aws::String&& value) { SetSourceAccountId(std::move(value)); return *this;}
    inline OptionGroup& WithSourceAccountId(const char* value) { SetSourceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline const Aws::Utils::DateTime& GetCopyTimestamp() const{ return m_copyTimestamp; }
    inline bool CopyTimestampHasBeenSet() const { return m_copyTimestampHasBeenSet; }
    inline void SetCopyTimestamp(const Aws::Utils::DateTime& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = value; }
    inline void SetCopyTimestamp(Aws::Utils::DateTime&& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = std::move(value); }
    inline OptionGroup& WithCopyTimestamp(const Aws::Utils::DateTime& value) { SetCopyTimestamp(value); return *this;}
    inline OptionGroup& WithCopyTimestamp(Aws::Utils::DateTime&& value) { SetCopyTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_optionGroupDescription;
    bool m_optionGroupDescriptionHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::Vector<Option> m_options;
    bool m_optionsHasBeenSet = false;

    bool m_allowsVpcAndNonVpcInstanceMemberships;
    bool m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_optionGroupArn;
    bool m_optionGroupArnHasBeenSet = false;

    Aws::String m_sourceOptionGroup;
    bool m_sourceOptionGroupHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_copyTimestamp;
    bool m_copyTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
