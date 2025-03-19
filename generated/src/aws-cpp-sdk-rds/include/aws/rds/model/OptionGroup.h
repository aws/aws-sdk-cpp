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
    AWS_RDS_API OptionGroup() = default;
    AWS_RDS_API OptionGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    OptionGroup& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a description of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupDescription() const { return m_optionGroupDescription; }
    inline bool OptionGroupDescriptionHasBeenSet() const { return m_optionGroupDescriptionHasBeenSet; }
    template<typename OptionGroupDescriptionT = Aws::String>
    void SetOptionGroupDescription(OptionGroupDescriptionT&& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = std::forward<OptionGroupDescriptionT>(value); }
    template<typename OptionGroupDescriptionT = Aws::String>
    OptionGroup& WithOptionGroupDescription(OptionGroupDescriptionT&& value) { SetOptionGroupDescription(std::forward<OptionGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    OptionGroup& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    OptionGroup& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline const Aws::Vector<Option>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<Option>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<Option>>
    OptionGroup& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = Option>
    OptionGroup& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances.</p>
     */
    inline bool GetAllowsVpcAndNonVpcInstanceMemberships() const { return m_allowsVpcAndNonVpcInstanceMemberships; }
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
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    OptionGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline const Aws::String& GetOptionGroupArn() const { return m_optionGroupArn; }
    inline bool OptionGroupArnHasBeenSet() const { return m_optionGroupArnHasBeenSet; }
    template<typename OptionGroupArnT = Aws::String>
    void SetOptionGroupArn(OptionGroupArnT&& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = std::forward<OptionGroupArnT>(value); }
    template<typename OptionGroupArnT = Aws::String>
    OptionGroup& WithOptionGroupArn(OptionGroupArnT&& value) { SetOptionGroupArn(std::forward<OptionGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline const Aws::String& GetSourceOptionGroup() const { return m_sourceOptionGroup; }
    inline bool SourceOptionGroupHasBeenSet() const { return m_sourceOptionGroupHasBeenSet; }
    template<typename SourceOptionGroupT = Aws::String>
    void SetSourceOptionGroup(SourceOptionGroupT&& value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup = std::forward<SourceOptionGroupT>(value); }
    template<typename SourceOptionGroupT = Aws::String>
    OptionGroup& WithSourceOptionGroup(SourceOptionGroupT&& value) { SetSourceOptionGroup(std::forward<SourceOptionGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    template<typename SourceAccountIdT = Aws::String>
    void SetSourceAccountId(SourceAccountIdT&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::forward<SourceAccountIdT>(value); }
    template<typename SourceAccountIdT = Aws::String>
    OptionGroup& WithSourceAccountId(SourceAccountIdT&& value) { SetSourceAccountId(std::forward<SourceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline const Aws::Utils::DateTime& GetCopyTimestamp() const { return m_copyTimestamp; }
    inline bool CopyTimestampHasBeenSet() const { return m_copyTimestampHasBeenSet; }
    template<typename CopyTimestampT = Aws::Utils::DateTime>
    void SetCopyTimestamp(CopyTimestampT&& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = std::forward<CopyTimestampT>(value); }
    template<typename CopyTimestampT = Aws::Utils::DateTime>
    OptionGroup& WithCopyTimestamp(CopyTimestampT&& value) { SetCopyTimestamp(std::forward<CopyTimestampT>(value)); return *this;}
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

    bool m_allowsVpcAndNonVpcInstanceMemberships{false};
    bool m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_optionGroupArn;
    bool m_optionGroupArnHasBeenSet = false;

    Aws::String m_sourceOptionGroup;
    bool m_sourceOptionGroupHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_copyTimestamp{};
    bool m_copyTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
