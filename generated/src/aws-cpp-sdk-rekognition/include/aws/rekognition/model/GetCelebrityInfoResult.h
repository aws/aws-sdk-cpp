/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/KnownGender.h>
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
namespace Rekognition
{
namespace Model
{
  class GetCelebrityInfoResult
  {
  public:
    AWS_REKOGNITION_API GetCelebrityInfoResult() = default;
    AWS_REKOGNITION_API GetCelebrityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetCelebrityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const { return m_urls; }
    template<typename UrlsT = Aws::Vector<Aws::String>>
    void SetUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls = std::forward<UrlsT>(value); }
    template<typename UrlsT = Aws::Vector<Aws::String>>
    GetCelebrityInfoResult& WithUrls(UrlsT&& value) { SetUrls(std::forward<UrlsT>(value)); return *this;}
    template<typename UrlsT = Aws::String>
    GetCelebrityInfoResult& AddUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls.emplace_back(std::forward<UrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCelebrityInfoResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the known gender for the celebrity.</p>
     */
    inline const KnownGender& GetKnownGender() const { return m_knownGender; }
    template<typename KnownGenderT = KnownGender>
    void SetKnownGender(KnownGenderT&& value) { m_knownGenderHasBeenSet = true; m_knownGender = std::forward<KnownGenderT>(value); }
    template<typename KnownGenderT = KnownGender>
    GetCelebrityInfoResult& WithKnownGender(KnownGenderT&& value) { SetKnownGender(std::forward<KnownGenderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCelebrityInfoResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KnownGender m_knownGender;
    bool m_knownGenderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
