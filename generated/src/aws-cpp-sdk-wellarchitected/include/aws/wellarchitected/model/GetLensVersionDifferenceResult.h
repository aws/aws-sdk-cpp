/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/VersionDifferences.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{
  class GetLensVersionDifferenceResult
  {
  public:
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult() = default;
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    GetLensVersionDifferenceResult& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    GetLensVersionDifferenceResult& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base version of the lens.</p>
     */
    inline const Aws::String& GetBaseLensVersion() const { return m_baseLensVersion; }
    template<typename BaseLensVersionT = Aws::String>
    void SetBaseLensVersion(BaseLensVersionT&& value) { m_baseLensVersionHasBeenSet = true; m_baseLensVersion = std::forward<BaseLensVersionT>(value); }
    template<typename BaseLensVersionT = Aws::String>
    GetLensVersionDifferenceResult& WithBaseLensVersion(BaseLensVersionT&& value) { SetBaseLensVersion(std::forward<BaseLensVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target lens version for the lens.</p>
     */
    inline const Aws::String& GetTargetLensVersion() const { return m_targetLensVersion; }
    template<typename TargetLensVersionT = Aws::String>
    void SetTargetLensVersion(TargetLensVersionT&& value) { m_targetLensVersionHasBeenSet = true; m_targetLensVersion = std::forward<TargetLensVersionT>(value); }
    template<typename TargetLensVersionT = Aws::String>
    GetLensVersionDifferenceResult& WithTargetLensVersion(TargetLensVersionT&& value) { SetTargetLensVersion(std::forward<TargetLensVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the lens.</p>
     */
    inline const Aws::String& GetLatestLensVersion() const { return m_latestLensVersion; }
    template<typename LatestLensVersionT = Aws::String>
    void SetLatestLensVersion(LatestLensVersionT&& value) { m_latestLensVersionHasBeenSet = true; m_latestLensVersion = std::forward<LatestLensVersionT>(value); }
    template<typename LatestLensVersionT = Aws::String>
    GetLensVersionDifferenceResult& WithLatestLensVersion(LatestLensVersionT&& value) { SetLatestLensVersion(std::forward<LatestLensVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VersionDifferences& GetVersionDifferences() const { return m_versionDifferences; }
    template<typename VersionDifferencesT = VersionDifferences>
    void SetVersionDifferences(VersionDifferencesT&& value) { m_versionDifferencesHasBeenSet = true; m_versionDifferences = std::forward<VersionDifferencesT>(value); }
    template<typename VersionDifferencesT = VersionDifferences>
    GetLensVersionDifferenceResult& WithVersionDifferences(VersionDifferencesT&& value) { SetVersionDifferences(std::forward<VersionDifferencesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLensVersionDifferenceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_baseLensVersion;
    bool m_baseLensVersionHasBeenSet = false;

    Aws::String m_targetLensVersion;
    bool m_targetLensVersionHasBeenSet = false;

    Aws::String m_latestLensVersion;
    bool m_latestLensVersionHasBeenSet = false;

    VersionDifferences m_versionDifferences;
    bool m_versionDifferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
