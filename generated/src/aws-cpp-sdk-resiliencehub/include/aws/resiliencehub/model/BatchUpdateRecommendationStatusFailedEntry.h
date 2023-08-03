/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>List of operational recommendations that did not get included or
   * excluded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/BatchUpdateRecommendationStatusFailedEntry">AWS
   * API Reference</a></p>
   */
  class BatchUpdateRecommendationStatusFailedEntry
  {
  public:
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusFailedEntry();
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusFailedEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusFailedEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline BatchUpdateRecommendationStatusFailedEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline BatchUpdateRecommendationStatusFailedEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}

    /**
     * <p>An identifier of an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline BatchUpdateRecommendationStatusFailedEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}


    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline BatchUpdateRecommendationStatusFailedEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline BatchUpdateRecommendationStatusFailedEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Indicates the error that occurred while excluding an operational
     * recommendation.</p>
     */
    inline BatchUpdateRecommendationStatusFailedEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
