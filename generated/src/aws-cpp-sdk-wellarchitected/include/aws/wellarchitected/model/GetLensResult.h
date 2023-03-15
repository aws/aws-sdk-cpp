﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Lens.h>
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
  class GetLensResult
  {
  public:
    AWS_WELLARCHITECTED_API GetLensResult();
    AWS_WELLARCHITECTED_API GetLensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetLensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A lens return object.</p>
     */
    inline const Lens& GetLens() const{ return m_lens; }

    /**
     * <p>A lens return object.</p>
     */
    inline void SetLens(const Lens& value) { m_lens = value; }

    /**
     * <p>A lens return object.</p>
     */
    inline void SetLens(Lens&& value) { m_lens = std::move(value); }

    /**
     * <p>A lens return object.</p>
     */
    inline GetLensResult& WithLens(const Lens& value) { SetLens(value); return *this;}

    /**
     * <p>A lens return object.</p>
     */
    inline GetLensResult& WithLens(Lens&& value) { SetLens(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLensResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLensResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLensResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Lens m_lens;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
