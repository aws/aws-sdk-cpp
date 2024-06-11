/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ImportLensStatus.h>
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
  class ImportLensResult
  {
  public:
    AWS_WELLARCHITECTED_API ImportLensResult();
    AWS_WELLARCHITECTED_API ImportLensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ImportLensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the lens that was created or updated.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }
    inline void SetLensArn(const Aws::String& value) { m_lensArn = value; }
    inline void SetLensArn(Aws::String&& value) { m_lensArn = std::move(value); }
    inline void SetLensArn(const char* value) { m_lensArn.assign(value); }
    inline ImportLensResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}
    inline ImportLensResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}
    inline ImportLensResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the imported lens.</p>
     */
    inline const ImportLensStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ImportLensStatus& value) { m_status = value; }
    inline void SetStatus(ImportLensStatus&& value) { m_status = std::move(value); }
    inline ImportLensResult& WithStatus(const ImportLensStatus& value) { SetStatus(value); return *this;}
    inline ImportLensResult& WithStatus(ImportLensStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportLensResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportLensResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportLensResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_lensArn;

    ImportLensStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
