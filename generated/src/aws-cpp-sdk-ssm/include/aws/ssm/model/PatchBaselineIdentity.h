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
    AWS_SSM_API PatchBaselineIdentity();
    AWS_SSM_API PatchBaselineIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchBaselineIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }
    inline PatchBaselineIdentity& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}
    inline PatchBaselineIdentity& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}
    inline PatchBaselineIdentity& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineName() const{ return m_baselineName; }
    inline bool BaselineNameHasBeenSet() const { return m_baselineNameHasBeenSet; }
    inline void SetBaselineName(const Aws::String& value) { m_baselineNameHasBeenSet = true; m_baselineName = value; }
    inline void SetBaselineName(Aws::String&& value) { m_baselineNameHasBeenSet = true; m_baselineName = std::move(value); }
    inline void SetBaselineName(const char* value) { m_baselineNameHasBeenSet = true; m_baselineName.assign(value); }
    inline PatchBaselineIdentity& WithBaselineName(const Aws::String& value) { SetBaselineName(value); return *this;}
    inline PatchBaselineIdentity& WithBaselineName(Aws::String&& value) { SetBaselineName(std::move(value)); return *this;}
    inline PatchBaselineIdentity& WithBaselineName(const char* value) { SetBaselineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline PatchBaselineIdentity& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline PatchBaselineIdentity& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineDescription() const{ return m_baselineDescription; }
    inline bool BaselineDescriptionHasBeenSet() const { return m_baselineDescriptionHasBeenSet; }
    inline void SetBaselineDescription(const Aws::String& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = value; }
    inline void SetBaselineDescription(Aws::String&& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = std::move(value); }
    inline void SetBaselineDescription(const char* value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription.assign(value); }
    inline PatchBaselineIdentity& WithBaselineDescription(const Aws::String& value) { SetBaselineDescription(value); return *this;}
    inline PatchBaselineIdentity& WithBaselineDescription(Aws::String&& value) { SetBaselineDescription(std::move(value)); return *this;}
    inline PatchBaselineIdentity& WithBaselineDescription(const char* value) { SetBaselineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default baseline. Amazon Web Services Systems
     * Manager supports creating multiple default patch baselines. For example, you can
     * create a default patch baseline for each operating system.</p>
     */
    inline bool GetDefaultBaseline() const{ return m_defaultBaseline; }
    inline bool DefaultBaselineHasBeenSet() const { return m_defaultBaselineHasBeenSet; }
    inline void SetDefaultBaseline(bool value) { m_defaultBaselineHasBeenSet = true; m_defaultBaseline = value; }
    inline PatchBaselineIdentity& WithDefaultBaseline(bool value) { SetDefaultBaseline(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_baselineName;
    bool m_baselineNameHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_baselineDescription;
    bool m_baselineDescriptionHasBeenSet = false;

    bool m_defaultBaseline;
    bool m_defaultBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
