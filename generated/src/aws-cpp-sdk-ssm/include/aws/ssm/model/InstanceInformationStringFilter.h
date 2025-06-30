/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The filters to describe or get information about your managed
   * nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInformationStringFilter">AWS
   * API Reference</a></p>
   */
  class InstanceInformationStringFilter
  {
  public:
    AWS_SSM_API InstanceInformationStringFilter() = default;
    AWS_SSM_API InstanceInformationStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceInformationStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter key name to describe your managed nodes.</p> <p>Valid filter key
     * values: ActivationIds | AgentVersion | AssociationStatus | IamRole | InstanceIds
     * | PingStatus | PlatformType | ResourceType | SourceIds | SourceTypes | "tag-key"
     * | "tag:<code>{keyname}</code> </p> <ul> <li> <p>Valid values for the
     * <code>AssociationStatus</code> filter key: Success | Pending | Failed</p> </li>
     * <li> <p>Valid values for the <code>PingStatus</code> filter key: Online |
     * ConnectionLost | Inactive (deprecated)</p> </li> <li> <p>Valid values for the
     * <code>PlatformType</code> filter key: Windows | Linux | MacOS</p> </li> <li>
     * <p>Valid values for the <code>ResourceType</code> filter key: EC2Instance |
     * ManagedInstance</p> </li> <li> <p>Valid values for the <code>SourceType</code>
     * filter key: AWS::EC2::Instance | AWS::SSM::ManagedInstance | AWS::IoT::Thing</p>
     * </li> <li> <p>Valid tag examples: <code>Key=tag-key,Values=Purpose</code> |
     * <code>Key=tag:Purpose,Values=Test</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    InstanceInformationStringFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    InstanceInformationStringFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    InstanceInformationStringFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
