/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>

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
namespace Translate
{
namespace Model
{

  /**
   * <p>The number of documents successfully and unsuccessfully processed during a
   * translation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/JobDetails">AWS
   * API Reference</a></p>
   */
  class JobDetails
  {
  public:
    AWS_TRANSLATE_API JobDetails();
    AWS_TRANSLATE_API JobDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API JobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of documents successfully processed during a translation job.</p>
     */
    inline int GetTranslatedDocumentsCount() const{ return m_translatedDocumentsCount; }

    /**
     * <p>The number of documents successfully processed during a translation job.</p>
     */
    inline bool TranslatedDocumentsCountHasBeenSet() const { return m_translatedDocumentsCountHasBeenSet; }

    /**
     * <p>The number of documents successfully processed during a translation job.</p>
     */
    inline void SetTranslatedDocumentsCount(int value) { m_translatedDocumentsCountHasBeenSet = true; m_translatedDocumentsCount = value; }

    /**
     * <p>The number of documents successfully processed during a translation job.</p>
     */
    inline JobDetails& WithTranslatedDocumentsCount(int value) { SetTranslatedDocumentsCount(value); return *this;}


    /**
     * <p>The number of documents that could not be processed during a translation
     * job.</p>
     */
    inline int GetDocumentsWithErrorsCount() const{ return m_documentsWithErrorsCount; }

    /**
     * <p>The number of documents that could not be processed during a translation
     * job.</p>
     */
    inline bool DocumentsWithErrorsCountHasBeenSet() const { return m_documentsWithErrorsCountHasBeenSet; }

    /**
     * <p>The number of documents that could not be processed during a translation
     * job.</p>
     */
    inline void SetDocumentsWithErrorsCount(int value) { m_documentsWithErrorsCountHasBeenSet = true; m_documentsWithErrorsCount = value; }

    /**
     * <p>The number of documents that could not be processed during a translation
     * job.</p>
     */
    inline JobDetails& WithDocumentsWithErrorsCount(int value) { SetDocumentsWithErrorsCount(value); return *this;}


    /**
     * <p>The number of documents used as input in a translation job.</p>
     */
    inline int GetInputDocumentsCount() const{ return m_inputDocumentsCount; }

    /**
     * <p>The number of documents used as input in a translation job.</p>
     */
    inline bool InputDocumentsCountHasBeenSet() const { return m_inputDocumentsCountHasBeenSet; }

    /**
     * <p>The number of documents used as input in a translation job.</p>
     */
    inline void SetInputDocumentsCount(int value) { m_inputDocumentsCountHasBeenSet = true; m_inputDocumentsCount = value; }

    /**
     * <p>The number of documents used as input in a translation job.</p>
     */
    inline JobDetails& WithInputDocumentsCount(int value) { SetInputDocumentsCount(value); return *this;}

  private:

    int m_translatedDocumentsCount;
    bool m_translatedDocumentsCountHasBeenSet = false;

    int m_documentsWithErrorsCount;
    bool m_documentsWithErrorsCountHasBeenSet = false;

    int m_inputDocumentsCount;
    bool m_inputDocumentsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
