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
    inline ImportLensResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ImportLensResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ImportLensResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The status of the imported lens.</p>
     */
    inline const ImportLensStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the imported lens.</p>
     */
    inline void SetStatus(const ImportLensStatus& value) { m_status = value; }

    /**
     * <p>The status of the imported lens.</p>
     */
    inline void SetStatus(ImportLensStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the imported lens.</p>
     */
    inline ImportLensResult& WithStatus(const ImportLensStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the imported lens.</p>
     */
    inline ImportLensResult& WithStatus(ImportLensStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_lensArn;

    ImportLensStatus m_status;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
