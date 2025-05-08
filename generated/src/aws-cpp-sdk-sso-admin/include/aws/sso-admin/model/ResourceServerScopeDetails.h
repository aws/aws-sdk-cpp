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
    AWS_SSOADMIN_API ResourceServerScopeDetails() = default;
    AWS_SSOADMIN_API ResourceServerScopeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ResourceServerScopeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of an access scope for a resource server.</p>
     */
    inline const Aws::String& GetLongDescription() const { return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    template<typename LongDescriptionT = Aws::String>
    void SetLongDescription(LongDescriptionT&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::forward<LongDescriptionT>(value); }
    template<typename LongDescriptionT = Aws::String>
    ResourceServerScopeDetails& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of an access scope for a resource server.</p>
     */
    inline const Aws::String& GetDetailedTitle() const { return m_detailedTitle; }
    inline bool DetailedTitleHasBeenSet() const { return m_detailedTitleHasBeenSet; }
    template<typename DetailedTitleT = Aws::String>
    void SetDetailedTitle(DetailedTitleT&& value) { m_detailedTitleHasBeenSet = true; m_detailedTitle = std::forward<DetailedTitleT>(value); }
    template<typename DetailedTitleT = Aws::String>
    ResourceServerScopeDetails& WithDetailedTitle(DetailedTitleT&& value) { SetDetailedTitle(std::forward<DetailedTitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;

    Aws::String m_detailedTitle;
    bool m_detailedTitleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
