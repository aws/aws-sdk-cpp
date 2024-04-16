/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CapacityTaskStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>The summary of the capacity task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CapacityTaskSummary">AWS
   * API Reference</a></p>
   */
  class CapacityTaskSummary
  {
  public:
    AWS_OUTPOSTS_API CapacityTaskSummary();
    AWS_OUTPOSTS_API CapacityTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API CapacityTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const{ return m_capacityTaskId; }

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline bool CapacityTaskIdHasBeenSet() const { return m_capacityTaskIdHasBeenSet; }

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline void SetCapacityTaskId(const Aws::String& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = value; }

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline void SetCapacityTaskId(Aws::String&& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = std::move(value); }

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline void SetCapacityTaskId(const char* value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId.assign(value); }

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline CapacityTaskSummary& WithCapacityTaskId(const Aws::String& value) { SetCapacityTaskId(value); return *this;}

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline CapacityTaskSummary& WithCapacityTaskId(Aws::String&& value) { SetCapacityTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specified capacity task.</p>
     */
    inline CapacityTaskSummary& WithCapacityTaskId(const char* value) { SetCapacityTaskId(value); return *this;}


    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline CapacityTaskSummary& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline CapacityTaskSummary& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Outpost associated with the specified capacity task.</p>
     */
    inline CapacityTaskSummary& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline CapacityTaskSummary& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline CapacityTaskSummary& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Outposts order of the host associated with
     * the capacity task.</p>
     */
    inline CapacityTaskSummary& WithOrderId(const char* value) { SetOrderId(value); return *this;}


    /**
     * <p>The status of the capacity task.</p>
     */
    inline const CapacityTaskStatus& GetCapacityTaskStatus() const{ return m_capacityTaskStatus; }

    /**
     * <p>The status of the capacity task.</p>
     */
    inline bool CapacityTaskStatusHasBeenSet() const { return m_capacityTaskStatusHasBeenSet; }

    /**
     * <p>The status of the capacity task.</p>
     */
    inline void SetCapacityTaskStatus(const CapacityTaskStatus& value) { m_capacityTaskStatusHasBeenSet = true; m_capacityTaskStatus = value; }

    /**
     * <p>The status of the capacity task.</p>
     */
    inline void SetCapacityTaskStatus(CapacityTaskStatus&& value) { m_capacityTaskStatusHasBeenSet = true; m_capacityTaskStatus = std::move(value); }

    /**
     * <p>The status of the capacity task.</p>
     */
    inline CapacityTaskSummary& WithCapacityTaskStatus(const CapacityTaskStatus& value) { SetCapacityTaskStatus(value); return *this;}

    /**
     * <p>The status of the capacity task.</p>
     */
    inline CapacityTaskSummary& WithCapacityTaskStatus(CapacityTaskStatus&& value) { SetCapacityTaskStatus(std::move(value)); return *this;}


    /**
     * <p>The date that the specified capacity task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date that the specified capacity task was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date that the specified capacity task was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date that the specified capacity task was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date that the specified capacity task was created.</p>
     */
    inline CapacityTaskSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date that the specified capacity task was created.</p>
     */
    inline CapacityTaskSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date that the specified capacity task successfully ran.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date that the specified capacity task successfully ran.</p>
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * <p>The date that the specified capacity task successfully ran.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * <p>The date that the specified capacity task successfully ran.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * <p>The date that the specified capacity task successfully ran.</p>
     */
    inline CapacityTaskSummary& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date that the specified capacity task successfully ran.</p>
     */
    inline CapacityTaskSummary& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The date that the specified capacity was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date that the specified capacity was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date that the specified capacity was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date that the specified capacity was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date that the specified capacity was last modified.</p>
     */
    inline CapacityTaskSummary& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date that the specified capacity was last modified.</p>
     */
    inline CapacityTaskSummary& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_capacityTaskId;
    bool m_capacityTaskIdHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    CapacityTaskStatus m_capacityTaskStatus;
    bool m_capacityTaskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
