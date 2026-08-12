/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LimitSource.h>
#include <aws/quicksight/model/LimitUnit.h>
#include <aws/quicksight/model/ResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The effective limit for a resource type that applies to a user, considering
 * all applicable profile assignments and inheritance rules.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/EffectiveLimit">AWS
 * API Reference</a></p>
 */
class EffectiveLimit {
 public:
  AWS_QUICKSIGHT_API EffectiveLimit() = default;
  AWS_QUICKSIGHT_API EffectiveLimit(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API EffectiveLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of resource that the limit applies to.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline EffectiveLimit& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum allowed value for the resource.</p>
   */
  inline long long GetLimitValue() const { return m_limitValue; }
  inline bool LimitValueHasBeenSet() const { return m_limitValueHasBeenSet; }
  inline void SetLimitValue(long long value) {
    m_limitValueHasBeenSet = true;
    m_limitValue = value;
  }
  inline EffectiveLimit& WithLimitValue(long long value) {
    SetLimitValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measurement for the limit.</p>
   */
  inline LimitUnit GetLimitUnit() const { return m_limitUnit; }
  inline bool LimitUnitHasBeenSet() const { return m_limitUnitHasBeenSet; }
  inline void SetLimitUnit(LimitUnit value) {
    m_limitUnitHasBeenSet = true;
    m_limitUnit = value;
  }
  inline EffectiveLimit& WithLimitUnit(LimitUnit value) {
    SetLimitUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source from which this limit was inherited. Possible values:</p> <ul>
   * <li> <p> <code>DIRECT_USER</code> – The limit comes from a profile directly
   * assigned to the user.</p> </li> <li> <p> <code>GROUP</code> – The limit comes
   * from a profile assigned to a group the user belongs to.</p> </li> <li> <p>
   * <code>ROLE</code> – The limit comes from a profile assigned to a role the user
   * has.</p> </li> <li> <p> <code>ACCOUNT</code> – The limit comes from the
   * account-level default profile.</p> </li> <li> <p> <code>SYSTEM_DEFAULT</code> –
   * The limit comes from the built-in system default.</p> </li> </ul>
   */
  inline LimitSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(LimitSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline EffectiveLimit& WithSource(LimitSource value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the limits profile that defines this limit.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  EffectiveLimit& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceType m_resourceType{ResourceType::NOT_SET};

  long long m_limitValue{0};

  LimitUnit m_limitUnit{LimitUnit::NOT_SET};

  LimitSource m_source{LimitSource::NOT_SET};

  Aws::String m_profileId;
  bool m_resourceTypeHasBeenSet = false;
  bool m_limitValueHasBeenSet = false;
  bool m_limitUnitHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
