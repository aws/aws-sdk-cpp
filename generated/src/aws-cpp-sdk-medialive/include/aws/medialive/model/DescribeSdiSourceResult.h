/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/SdiSource.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeSdiSourceResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSdiSourceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSdiSourceResult
  {
  public:
    AWS_MEDIALIVE_API DescribeSdiSourceResult() = default;
    AWS_MEDIALIVE_API DescribeSdiSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeSdiSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Settings for the SDI source.
     */
    inline const SdiSource& GetSdiSource() const { return m_sdiSource; }
    template<typename SdiSourceT = SdiSource>
    void SetSdiSource(SdiSourceT&& value) { m_sdiSourceHasBeenSet = true; m_sdiSource = std::forward<SdiSourceT>(value); }
    template<typename SdiSourceT = SdiSource>
    DescribeSdiSourceResult& WithSdiSource(SdiSourceT&& value) { SetSdiSource(std::forward<SdiSourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSdiSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SdiSource m_sdiSource;
    bool m_sdiSourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
