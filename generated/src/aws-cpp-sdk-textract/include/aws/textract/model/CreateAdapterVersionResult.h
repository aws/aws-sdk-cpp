/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{
  class CreateAdapterVersionResult
  {
  public:
    AWS_TEXTRACT_API CreateAdapterVersionResult() = default;
    AWS_TEXTRACT_API CreateAdapterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API CreateAdapterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline const Aws::String& GetAdapterId() const { return m_adapterId; }
    template<typename AdapterIdT = Aws::String>
    void SetAdapterId(AdapterIdT&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::forward<AdapterIdT>(value); }
    template<typename AdapterIdT = Aws::String>
    CreateAdapterVersionResult& WithAdapterId(AdapterIdT&& value) { SetAdapterId(std::forward<AdapterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline const Aws::String& GetAdapterVersion() const { return m_adapterVersion; }
    template<typename AdapterVersionT = Aws::String>
    void SetAdapterVersion(AdapterVersionT&& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = std::forward<AdapterVersionT>(value); }
    template<typename AdapterVersionT = Aws::String>
    CreateAdapterVersionResult& WithAdapterVersion(AdapterVersionT&& value) { SetAdapterVersion(std::forward<AdapterVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAdapterVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterVersion;
    bool m_adapterVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
