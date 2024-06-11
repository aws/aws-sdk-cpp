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


    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }
    inline void SetLensArn(const Aws::String& value) { m_lensArn = value; }
    inline void SetLensArn(Aws::String&& value) { m_lensArn = std::move(value); }
    inline void SetLensArn(const char* value) { m_lensArn.assign(value); }
    inline CreateLensVersionResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}
    inline CreateLensVersionResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}
    inline CreateLensVersionResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const{ return m_lensVersion; }
    inline void SetLensVersion(const Aws::String& value) { m_lensVersion = value; }
    inline void SetLensVersion(Aws::String&& value) { m_lensVersion = std::move(value); }
    inline void SetLensVersion(const char* value) { m_lensVersion.assign(value); }
    inline CreateLensVersionResult& WithLensVersion(const Aws::String& value) { SetLensVersion(value); return *this;}
    inline CreateLensVersionResult& WithLensVersion(Aws::String&& value) { SetLensVersion(std::move(value)); return *this;}
    inline CreateLensVersionResult& WithLensVersion(const char* value) { SetLensVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLensVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLensVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLensVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_lensArn;

    Aws::String m_lensVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
