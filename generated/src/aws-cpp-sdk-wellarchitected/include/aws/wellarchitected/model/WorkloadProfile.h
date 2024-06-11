/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The profile associated with a workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadProfile">AWS
   * API Reference</a></p>
   */
  class WorkloadProfile
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadProfile();
    AWS_WELLARCHITECTED_API WorkloadProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }
    inline WorkloadProfile& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}
    inline WorkloadProfile& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}
    inline WorkloadProfile& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile version.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }
    inline WorkloadProfile& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline WorkloadProfile& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline WorkloadProfile& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
