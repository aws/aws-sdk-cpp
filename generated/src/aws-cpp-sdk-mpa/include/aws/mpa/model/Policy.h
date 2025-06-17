/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/PolicyType.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for a policy. Policies define what operations a team that
   * define the permissions for team resources.</p> <p>The protected operation for a
   * service integration might require specific permissions. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
   * other services work with Multi-party approval</a> in the <i>Multi-party approval
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/Policy">AWS API
   * Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_MPA_API Policy() = default;
    AWS_MPA_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the policy.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Policy& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the specified policy is the default for the team.</p>
     */
    inline int GetDefaultVersion() const { return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(int value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline Policy& WithDefaultVersion(int value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline Policy& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Policy& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_defaultVersion{0};
    bool m_defaultVersionHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
