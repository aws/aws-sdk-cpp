/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateLensVersionResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateLensVersionResult();
    AWS_WELLARCHITECTED_API CreateLensVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateLensVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateLensVersionResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline CreateLensVersionResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline CreateLensVersionResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const{ return m_lensVersion; }

    /**
     * <p>The version of the lens.</p>
     */
    inline void SetLensVersion(const Aws::String& value) { m_lensVersion = value; }

    /**
     * <p>The version of the lens.</p>
     */
    inline void SetLensVersion(Aws::String&& value) { m_lensVersion = std::move(value); }

    /**
     * <p>The version of the lens.</p>
     */
    inline void SetLensVersion(const char* value) { m_lensVersion.assign(value); }

    /**
     * <p>The version of the lens.</p>
     */
    inline CreateLensVersionResult& WithLensVersion(const Aws::String& value) { SetLensVersion(value); return *this;}

    /**
     * <p>The version of the lens.</p>
     */
    inline CreateLensVersionResult& WithLensVersion(Aws::String&& value) { SetLensVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the lens.</p>
     */
    inline CreateLensVersionResult& WithLensVersion(const char* value) { SetLensVersion(value); return *this;}

  private:

    Aws::String m_lensArn;

    Aws::String m_lensVersion;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
