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
    AWS_SECURITYHUB_API Cvss();
    AWS_SECURITYHUB_API Cvss(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Cvss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Cvss& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Cvss& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Cvss& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base CVSS score.</p>
     */
    inline double GetBaseScore() const{ return m_baseScore; }
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }
    inline Cvss& WithBaseScore(double value) { SetBaseScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline const Aws::String& GetBaseVector() const{ return m_baseVector; }
    inline bool BaseVectorHasBeenSet() const { return m_baseVectorHasBeenSet; }
    inline void SetBaseVector(const Aws::String& value) { m_baseVectorHasBeenSet = true; m_baseVector = value; }
    inline void SetBaseVector(Aws::String&& value) { m_baseVectorHasBeenSet = true; m_baseVector = std::move(value); }
    inline void SetBaseVector(const char* value) { m_baseVectorHasBeenSet = true; m_baseVector.assign(value); }
    inline Cvss& WithBaseVector(const Aws::String& value) { SetBaseVector(value); return *this;}
    inline Cvss& WithBaseVector(Aws::String&& value) { SetBaseVector(std::move(value)); return *this;}
    inline Cvss& WithBaseVector(const char* value) { SetBaseVector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline Cvss& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline Cvss& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline Cvss& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline const Aws::Vector<Adjustment>& GetAdjustments() const{ return m_adjustments; }
    inline bool AdjustmentsHasBeenSet() const { return m_adjustmentsHasBeenSet; }
    inline void SetAdjustments(const Aws::Vector<Adjustment>& value) { m_adjustmentsHasBeenSet = true; m_adjustments = value; }
    inline void SetAdjustments(Aws::Vector<Adjustment>&& value) { m_adjustmentsHasBeenSet = true; m_adjustments = std::move(value); }
    inline Cvss& WithAdjustments(const Aws::Vector<Adjustment>& value) { SetAdjustments(value); return *this;}
    inline Cvss& WithAdjustments(Aws::Vector<Adjustment>&& value) { SetAdjustments(std::move(value)); return *this;}
    inline Cvss& AddAdjustments(const Adjustment& value) { m_adjustmentsHasBeenSet = true; m_adjustments.push_back(value); return *this; }
    inline Cvss& AddAdjustments(Adjustment&& value) { m_adjustmentsHasBeenSet = true; m_adjustments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    double m_baseScore;
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
