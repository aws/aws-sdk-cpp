/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceError.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p> A list of errors retrieving an application's resources. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResourceErrorsDetails">AWS
   * API Reference</a></p>
   */
  class ResourceErrorsDetails
  {
  public:
    AWS_RESILIENCEHUB_API ResourceErrorsDetails() = default;
    AWS_RESILIENCEHUB_API ResourceErrorsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResourceErrorsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> This indicates if there are more errors not listed in the
     * <code>resourceErrors</code> list. </p>
     */
    inline bool GetHasMoreErrors() const { return m_hasMoreErrors; }
    inline bool HasMoreErrorsHasBeenSet() const { return m_hasMoreErrorsHasBeenSet; }
    inline void SetHasMoreErrors(bool value) { m_hasMoreErrorsHasBeenSet = true; m_hasMoreErrors = value; }
    inline ResourceErrorsDetails& WithHasMoreErrors(bool value) { SetHasMoreErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline const Aws::Vector<ResourceError>& GetResourceErrors() const { return m_resourceErrors; }
    inline bool ResourceErrorsHasBeenSet() const { return m_resourceErrorsHasBeenSet; }
    template<typename ResourceErrorsT = Aws::Vector<ResourceError>>
    void SetResourceErrors(ResourceErrorsT&& value) { m_resourceErrorsHasBeenSet = true; m_resourceErrors = std::forward<ResourceErrorsT>(value); }
    template<typename ResourceErrorsT = Aws::Vector<ResourceError>>
    ResourceErrorsDetails& WithResourceErrors(ResourceErrorsT&& value) { SetResourceErrors(std::forward<ResourceErrorsT>(value)); return *this;}
    template<typename ResourceErrorsT = ResourceError>
    ResourceErrorsDetails& AddResourceErrors(ResourceErrorsT&& value) { m_resourceErrorsHasBeenSet = true; m_resourceErrors.emplace_back(std::forward<ResourceErrorsT>(value)); return *this; }
    ///@}
  private:

    bool m_hasMoreErrors{false};
    bool m_hasMoreErrorsHasBeenSet = false;

    Aws::Vector<ResourceError> m_resourceErrors;
    bool m_resourceErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
