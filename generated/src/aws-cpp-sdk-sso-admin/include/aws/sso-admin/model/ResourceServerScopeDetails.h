/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes details for an IAM Identity Center access scope
   * that is associated with a resource server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ResourceServerScopeDetails">AWS
   * API Reference</a></p>
   */
  class ResourceServerScopeDetails
  {
  public:
    AWS_SSOADMIN_API ResourceServerScopeDetails();
    AWS_SSOADMIN_API ResourceServerScopeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ResourceServerScopeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline const Aws::String& GetDetailedTitle() const{ return m_detailedTitle; }

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline bool DetailedTitleHasBeenSet() const { return m_detailedTitleHasBeenSet; }

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline void SetDetailedTitle(const Aws::String& value) { m_detailedTitleHasBeenSet = true; m_detailedTitle = value; }

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline void SetDetailedTitle(Aws::String&& value) { m_detailedTitleHasBeenSet = true; m_detailedTitle = std::move(value); }

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline void SetDetailedTitle(const char* value) { m_detailedTitleHasBeenSet = true; m_detailedTitle.assign(value); }

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline ResourceServerScopeDetails& WithDetailedTitle(const Aws::String& value) { SetDetailedTitle(value); return *this;}

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline ResourceServerScopeDetails& WithDetailedTitle(Aws::String&& value) { SetDetailedTitle(std::move(value)); return *this;}

    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline ResourceServerScopeDetails& WithDetailedTitle(const char* value) { SetDetailedTitle(value); return *this;}


    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline ResourceServerScopeDetails& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline ResourceServerScopeDetails& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline ResourceServerScopeDetails& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}

  private:

    Aws::String m_detailedTitle;
    bool m_detailedTitleHasBeenSet = false;

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
