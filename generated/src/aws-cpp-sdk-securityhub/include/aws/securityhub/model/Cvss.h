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


    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline Cvss& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline Cvss& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of CVSS for the CVSS score.</p>
     */
    inline Cvss& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The base CVSS score.</p>
     */
    inline double GetBaseScore() const{ return m_baseScore; }

    /**
     * <p>The base CVSS score.</p>
     */
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }

    /**
     * <p>The base CVSS score.</p>
     */
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }

    /**
     * <p>The base CVSS score.</p>
     */
    inline Cvss& WithBaseScore(double value) { SetBaseScore(value); return *this;}


    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline const Aws::String& GetBaseVector() const{ return m_baseVector; }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline bool BaseVectorHasBeenSet() const { return m_baseVectorHasBeenSet; }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline void SetBaseVector(const Aws::String& value) { m_baseVectorHasBeenSet = true; m_baseVector = value; }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline void SetBaseVector(Aws::String&& value) { m_baseVectorHasBeenSet = true; m_baseVector = std::move(value); }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline void SetBaseVector(const char* value) { m_baseVectorHasBeenSet = true; m_baseVector.assign(value); }

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline Cvss& WithBaseVector(const Aws::String& value) { SetBaseVector(value); return *this;}

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline Cvss& WithBaseVector(Aws::String&& value) { SetBaseVector(std::move(value)); return *this;}

    /**
     * <p>The base scoring vector for the CVSS score.</p>
     */
    inline Cvss& WithBaseVector(const char* value) { SetBaseVector(value); return *this;}


    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline Cvss& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline Cvss& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The origin of the original CVSS score and vector.</p>
     */
    inline Cvss& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline const Aws::Vector<Adjustment>& GetAdjustments() const{ return m_adjustments; }

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline bool AdjustmentsHasBeenSet() const { return m_adjustmentsHasBeenSet; }

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline void SetAdjustments(const Aws::Vector<Adjustment>& value) { m_adjustmentsHasBeenSet = true; m_adjustments = value; }

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline void SetAdjustments(Aws::Vector<Adjustment>&& value) { m_adjustmentsHasBeenSet = true; m_adjustments = std::move(value); }

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline Cvss& WithAdjustments(const Aws::Vector<Adjustment>& value) { SetAdjustments(value); return *this;}

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline Cvss& WithAdjustments(Aws::Vector<Adjustment>&& value) { SetAdjustments(std::move(value)); return *this;}

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline Cvss& AddAdjustments(const Adjustment& value) { m_adjustmentsHasBeenSet = true; m_adjustments.push_back(value); return *this; }

    /**
     * <p>Adjustments to the CVSS metrics.</p>
     */
    inline Cvss& AddAdjustments(Adjustment&& value) { m_adjustmentsHasBeenSet = true; m_adjustments.push_back(std::move(value)); return *this; }

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
