/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CreateAssociationBatchRequestEntry.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateAssociationBatchRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateAssociationBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssociationBatch"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more associations.</p>
     */
    inline const Aws::Vector<CreateAssociationBatchRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>One or more associations.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>One or more associations.</p>
     */
    inline void SetEntries(const Aws::Vector<CreateAssociationBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>One or more associations.</p>
     */
    inline void SetEntries(Aws::Vector<CreateAssociationBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& WithEntries(const Aws::Vector<CreateAssociationBatchRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& WithEntries(Aws::Vector<CreateAssociationBatchRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& AddEntries(const CreateAssociationBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& AddEntries(CreateAssociationBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CreateAssociationBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
