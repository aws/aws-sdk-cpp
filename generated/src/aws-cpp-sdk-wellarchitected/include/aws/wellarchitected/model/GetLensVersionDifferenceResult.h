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
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult();
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetLensVersionDifferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAlias.assign(value); }

    
    inline GetLensVersionDifferenceResult& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline GetLensVersionDifferenceResult& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline GetLensVersionDifferenceResult& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArn = value; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArn = std::move(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArn.assign(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The base version of the lens.</p>
     */
    inline const Aws::String& GetBaseLensVersion() const{ return m_baseLensVersion; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(const Aws::String& value) { m_baseLensVersion = value; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(Aws::String&& value) { m_baseLensVersion = std::move(value); }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(const char* value) { m_baseLensVersion.assign(value); }

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithBaseLensVersion(const Aws::String& value) { SetBaseLensVersion(value); return *this;}

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithBaseLensVersion(Aws::String&& value) { SetBaseLensVersion(std::move(value)); return *this;}

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithBaseLensVersion(const char* value) { SetBaseLensVersion(value); return *this;}


    /**
     * <p>The target lens version for the lens.</p>
     */
    inline const Aws::String& GetTargetLensVersion() const{ return m_targetLensVersion; }

    /**
     * <p>The target lens version for the lens.</p>
     */
    inline void SetTargetLensVersion(const Aws::String& value) { m_targetLensVersion = value; }

    /**
     * <p>The target lens version for the lens.</p>
     */
    inline void SetTargetLensVersion(Aws::String&& value) { m_targetLensVersion = std::move(value); }

    /**
     * <p>The target lens version for the lens.</p>
     */
    inline void SetTargetLensVersion(const char* value) { m_targetLensVersion.assign(value); }

    /**
     * <p>The target lens version for the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithTargetLensVersion(const Aws::String& value) { SetTargetLensVersion(value); return *this;}

    /**
     * <p>The target lens version for the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithTargetLensVersion(Aws::String&& value) { SetTargetLensVersion(std::move(value)); return *this;}

    /**
     * <p>The target lens version for the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithTargetLensVersion(const char* value) { SetTargetLensVersion(value); return *this;}


    /**
     * <p>The latest version of the lens.</p>
     */
    inline const Aws::String& GetLatestLensVersion() const{ return m_latestLensVersion; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(const Aws::String& value) { m_latestLensVersion = value; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(Aws::String&& value) { m_latestLensVersion = std::move(value); }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(const char* value) { m_latestLensVersion.assign(value); }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLatestLensVersion(const Aws::String& value) { SetLatestLensVersion(value); return *this;}

    /**
     * <p>The latest version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLatestLensVersion(Aws::String&& value) { SetLatestLensVersion(std::move(value)); return *this;}

    /**
     * <p>The latest version of the lens.</p>
     */
    inline GetLensVersionDifferenceResult& WithLatestLensVersion(const char* value) { SetLatestLensVersion(value); return *this;}


    
    inline const VersionDifferences& GetVersionDifferences() const{ return m_versionDifferences; }

    
    inline void SetVersionDifferences(const VersionDifferences& value) { m_versionDifferences = value; }

    
    inline void SetVersionDifferences(VersionDifferences&& value) { m_versionDifferences = std::move(value); }

    
    inline GetLensVersionDifferenceResult& WithVersionDifferences(const VersionDifferences& value) { SetVersionDifferences(value); return *this;}

    
    inline GetLensVersionDifferenceResult& WithVersionDifferences(VersionDifferences&& value) { SetVersionDifferences(std::move(value)); return *this;}

  private:

    Aws::String m_lensAlias;

    Aws::String m_lensArn;

    Aws::String m_baseLensVersion;

    Aws::String m_targetLensVersion;

    Aws::String m_latestLensVersion;

    VersionDifferences m_versionDifferences;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
