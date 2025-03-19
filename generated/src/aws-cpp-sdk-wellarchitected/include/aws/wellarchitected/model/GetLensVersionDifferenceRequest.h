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
  class GetLensVersionDifferenceRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLensVersionDifference"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    GetLensVersionDifferenceRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base version of the lens.</p>
     */
    inline const Aws::String& GetBaseLensVersion() const { return m_baseLensVersion; }
    inline bool BaseLensVersionHasBeenSet() const { return m_baseLensVersionHasBeenSet; }
    template<typename BaseLensVersionT = Aws::String>
    void SetBaseLensVersion(BaseLensVersionT&& value) { m_baseLensVersionHasBeenSet = true; m_baseLensVersion = std::forward<BaseLensVersionT>(value); }
    template<typename BaseLensVersionT = Aws::String>
    GetLensVersionDifferenceRequest& WithBaseLensVersion(BaseLensVersionT&& value) { SetBaseLensVersion(std::forward<BaseLensVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lens version to target a difference for.</p>
     */
    inline const Aws::String& GetTargetLensVersion() const { return m_targetLensVersion; }
    inline bool TargetLensVersionHasBeenSet() const { return m_targetLensVersionHasBeenSet; }
    template<typename TargetLensVersionT = Aws::String>
    void SetTargetLensVersion(TargetLensVersionT&& value) { m_targetLensVersionHasBeenSet = true; m_targetLensVersion = std::forward<TargetLensVersionT>(value); }
    template<typename TargetLensVersionT = Aws::String>
    GetLensVersionDifferenceRequest& WithTargetLensVersion(TargetLensVersionT&& value) { SetTargetLensVersion(std::forward<TargetLensVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_baseLensVersion;
    bool m_baseLensVersionHasBeenSet = false;

    Aws::String m_targetLensVersion;
    bool m_targetLensVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
