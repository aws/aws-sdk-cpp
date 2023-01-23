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
  class CreateLensShareResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateLensShareResult();
    AWS_WELLARCHITECTED_API CreateLensShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateLensShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline void SetShareId(const Aws::String& value) { m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareId.assign(value); }

    
    inline CreateLensShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline CreateLensShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline CreateLensShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}

  private:

    Aws::String m_shareId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
