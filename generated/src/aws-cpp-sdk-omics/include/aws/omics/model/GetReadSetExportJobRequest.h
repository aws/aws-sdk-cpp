/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class GetReadSetExportJobRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetReadSetExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReadSetExportJob"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The job's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline GetReadSetExportJobRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetReadSetExportJobRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline GetReadSetExportJobRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The job's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline GetReadSetExportJobRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline GetReadSetExportJobRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The job's sequence store ID.</p>
     */
    inline GetReadSetExportJobRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
