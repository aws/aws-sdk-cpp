/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Adjustment.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>CVSS scores from the advisory related to the vulnerability.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Cvss">AWS
   * API Reference</a></p>
   */
  class Cvss
  {
  public:
    AWS_SECURITYHUB_API Cvss() = default;
    AWS_SECURITYHUB_API Cvss(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Cvss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Cvss& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base CVSS score.</p>
     */
    inline double GetBaseScore() const { return m_baseScore; }
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }
    inline Cvss& WithBaseScore(double value) { SetBaseScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline const Aws::String& GetBaseVector() const { return m_baseVector; }
    inline bool BaseVectorHasBeenSet() const { return m_baseVectorHasBeenSet; }
    template<typename BaseVectorT = Aws::String>
    void SetBaseVector(BaseVectorT&& value) { m_baseVectorHasBeenSet = true; m_baseVector = std::forward<BaseVectorT>(value); }
    template<typename BaseVectorT = Aws::String>
    Cvss& WithBaseVector(BaseVectorT&& value) { SetBaseVector(std::forward<BaseVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Cvss& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline const Aws::Vector<Adjustment>& GetAdjustments() const { return m_adjustments; }
    inline bool AdjustmentsHasBeenSet() const { return m_adjustmentsHasBeenSet; }
    template<typename AdjustmentsT = Aws::Vector<Adjustment>>
    void SetAdjustments(AdjustmentsT&& value) { m_adjustmentsHasBeenSet = true; m_adjustments = std::forward<AdjustmentsT>(value); }
    template<typename AdjustmentsT = Aws::Vector<Adjustment>>
    Cvss& WithAdjustments(AdjustmentsT&& value) { SetAdjustments(std::forward<AdjustmentsT>(value)); return *this;}
    template<typename AdjustmentsT = Adjustment>
    Cvss& AddAdjustments(AdjustmentsT&& value) { m_adjustmentsHasBeenSet = true; m_adjustments.emplace_back(std::forward<AdjustmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    double m_baseScore{0.0};
    bool m_baseScoreHasBeenSet = false;

    Aws::String m_baseVector;
    bool m_baseVectorHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Adjustment> m_adjustments;
    bool m_adjustmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
