/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class GetProfileRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API GetProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfile"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline GetProfileRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline GetProfileRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline GetProfileRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The profile version.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The profile version.</p>
     */
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }

    /**
     * <p>The profile version.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }

    /**
     * <p>The profile version.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }

    /**
     * <p>The profile version.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }

    /**
     * <p>The profile version.</p>
     */
    inline GetProfileRequest& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The profile version.</p>
     */
    inline GetProfileRequest& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The profile version.</p>
     */
    inline GetProfileRequest& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}

  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
