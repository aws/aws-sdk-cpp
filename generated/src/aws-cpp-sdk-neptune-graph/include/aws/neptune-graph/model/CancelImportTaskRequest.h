/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class CancelImportTaskRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API CancelImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelImportTask"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline const Aws::String& GetTaskIdentifier() const{ return m_taskIdentifier; }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline bool TaskIdentifierHasBeenSet() const { return m_taskIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline void SetTaskIdentifier(const Aws::String& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier = value; }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline void SetTaskIdentifier(Aws::String&& value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline void SetTaskIdentifier(const char* value) { m_taskIdentifierHasBeenSet = true; m_taskIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline CancelImportTaskRequest& WithTaskIdentifier(const Aws::String& value) { SetTaskIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline CancelImportTaskRequest& WithTaskIdentifier(Aws::String&& value) { SetTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the import task.</p>
     */
    inline CancelImportTaskRequest& WithTaskIdentifier(const char* value) { SetTaskIdentifier(value); return *this;}

  private:

    Aws::String m_taskIdentifier;
    bool m_taskIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
