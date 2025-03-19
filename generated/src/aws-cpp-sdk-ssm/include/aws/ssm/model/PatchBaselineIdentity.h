/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OperatingSystem.h>
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
   * <p>Defines the basic information about a patch baseline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchBaselineIdentity">AWS
   * API Reference</a></p>
   */
  class PatchBaselineIdentity
  {
  public:
    AWS_SSM_API PatchBaselineIdentity() = default;
    AWS_SSM_API PatchBaselineIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchBaselineIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const { return m_baselineId; }
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }
    template<typename BaselineIdT = Aws::String>
    void SetBaselineId(BaselineIdT&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::forward<BaselineIdT>(value); }
    template<typename BaselineIdT = Aws::String>
    PatchBaselineIdentity& WithBaselineId(BaselineIdT&& value) { SetBaselineId(std::forward<BaselineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineName() const { return m_baselineName; }
    inline bool BaselineNameHasBeenSet() const { return m_baselineNameHasBeenSet; }
    template<typename BaselineNameT = Aws::String>
    void SetBaselineName(BaselineNameT&& value) { m_baselineNameHasBeenSet = true; m_baselineName = std::forward<BaselineNameT>(value); }
    template<typename BaselineNameT = Aws::String>
    PatchBaselineIdentity& WithBaselineName(BaselineNameT&& value) { SetBaselineName(std::forward<BaselineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline PatchBaselineIdentity& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineDescription() const { return m_baselineDescription; }
    inline bool BaselineDescriptionHasBeenSet() const { return m_baselineDescriptionHasBeenSet; }
    template<typename BaselineDescriptionT = Aws::String>
    void SetBaselineDescription(BaselineDescriptionT&& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = std::forward<BaselineDescriptionT>(value); }
    template<typename BaselineDescriptionT = Aws::String>
    PatchBaselineIdentity& WithBaselineDescription(BaselineDescriptionT&& value) { SetBaselineDescription(std::forward<BaselineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default baseline. Amazon Web Services Systems
     * Manager supports creating multiple default patch baselines. For example, you can
     * create a default patch baseline for each operating system.</p>
     */
    inline bool GetDefaultBaseline() const { return m_defaultBaseline; }
    inline bool DefaultBaselineHasBeenSet() const { return m_defaultBaselineHasBeenSet; }
    inline void SetDefaultBaseline(bool value) { m_defaultBaselineHasBeenSet = true; m_defaultBaseline = value; }
    inline PatchBaselineIdentity& WithDefaultBaseline(bool value) { SetDefaultBaseline(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_baselineName;
    bool m_baselineNameHasBeenSet = false;

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_baselineDescription;
    bool m_baselineDescriptionHasBeenSet = false;

    bool m_defaultBaseline{false};
    bool m_defaultBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
