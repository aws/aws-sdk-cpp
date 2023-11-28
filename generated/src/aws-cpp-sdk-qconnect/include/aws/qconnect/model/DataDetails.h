/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentDataDetails.h>
#include <aws/qconnect/model/GenerativeDataDetails.h>
#include <aws/qconnect/model/SourceContentDataDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>Details about the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DataDetails">AWS
   * API Reference</a></p>
   */
  class DataDetails
  {
  public:
    AWS_QCONNECT_API DataDetails();
    AWS_QCONNECT_API DataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API DataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the content data.</p>
     */
    inline const ContentDataDetails& GetContentData() const{ return m_contentData; }

    /**
     * <p>Details about the content data.</p>
     */
    inline bool ContentDataHasBeenSet() const { return m_contentDataHasBeenSet; }

    /**
     * <p>Details about the content data.</p>
     */
    inline void SetContentData(const ContentDataDetails& value) { m_contentDataHasBeenSet = true; m_contentData = value; }

    /**
     * <p>Details about the content data.</p>
     */
    inline void SetContentData(ContentDataDetails&& value) { m_contentDataHasBeenSet = true; m_contentData = std::move(value); }

    /**
     * <p>Details about the content data.</p>
     */
    inline DataDetails& WithContentData(const ContentDataDetails& value) { SetContentData(value); return *this;}

    /**
     * <p>Details about the content data.</p>
     */
    inline DataDetails& WithContentData(ContentDataDetails&& value) { SetContentData(std::move(value)); return *this;}


    /**
     * <p> Details about the generative data.</p>
     */
    inline const GenerativeDataDetails& GetGenerativeData() const{ return m_generativeData; }

    /**
     * <p> Details about the generative data.</p>
     */
    inline bool GenerativeDataHasBeenSet() const { return m_generativeDataHasBeenSet; }

    /**
     * <p> Details about the generative data.</p>
     */
    inline void SetGenerativeData(const GenerativeDataDetails& value) { m_generativeDataHasBeenSet = true; m_generativeData = value; }

    /**
     * <p> Details about the generative data.</p>
     */
    inline void SetGenerativeData(GenerativeDataDetails&& value) { m_generativeDataHasBeenSet = true; m_generativeData = std::move(value); }

    /**
     * <p> Details about the generative data.</p>
     */
    inline DataDetails& WithGenerativeData(const GenerativeDataDetails& value) { SetGenerativeData(value); return *this;}

    /**
     * <p> Details about the generative data.</p>
     */
    inline DataDetails& WithGenerativeData(GenerativeDataDetails&& value) { SetGenerativeData(std::move(value)); return *this;}


    /**
     * <p>Details about the content data.</p>
     */
    inline const SourceContentDataDetails& GetSourceContentData() const{ return m_sourceContentData; }

    /**
     * <p>Details about the content data.</p>
     */
    inline bool SourceContentDataHasBeenSet() const { return m_sourceContentDataHasBeenSet; }

    /**
     * <p>Details about the content data.</p>
     */
    inline void SetSourceContentData(const SourceContentDataDetails& value) { m_sourceContentDataHasBeenSet = true; m_sourceContentData = value; }

    /**
     * <p>Details about the content data.</p>
     */
    inline void SetSourceContentData(SourceContentDataDetails&& value) { m_sourceContentDataHasBeenSet = true; m_sourceContentData = std::move(value); }

    /**
     * <p>Details about the content data.</p>
     */
    inline DataDetails& WithSourceContentData(const SourceContentDataDetails& value) { SetSourceContentData(value); return *this;}

    /**
     * <p>Details about the content data.</p>
     */
    inline DataDetails& WithSourceContentData(SourceContentDataDetails&& value) { SetSourceContentData(std::move(value)); return *this;}

  private:

    ContentDataDetails m_contentData;
    bool m_contentDataHasBeenSet = false;

    GenerativeDataDetails m_generativeData;
    bool m_generativeDataHasBeenSet = false;

    SourceContentDataDetails m_sourceContentData;
    bool m_sourceContentDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
