/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for information about a configuration change happening on a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ChangeProgressDetails">AWS
   * API Reference</a></p>
   */
  class ChangeProgressDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails();
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ChangeProgressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the configuration change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(const char* value) { SetChangeId(value); return *this;}


    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message corresponding to the status of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
