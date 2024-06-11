﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/RunExport.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class GetRunRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRun"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetRunRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetRunRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetRunRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's export format.</p>
     */
    inline const Aws::Vector<RunExport>& GetExport() const{ return m_export; }
    inline bool ExportHasBeenSet() const { return m_exportHasBeenSet; }
    inline void SetExport(const Aws::Vector<RunExport>& value) { m_exportHasBeenSet = true; m_export = value; }
    inline void SetExport(Aws::Vector<RunExport>&& value) { m_exportHasBeenSet = true; m_export = std::move(value); }
    inline GetRunRequest& WithExport(const Aws::Vector<RunExport>& value) { SetExport(value); return *this;}
    inline GetRunRequest& WithExport(Aws::Vector<RunExport>&& value) { SetExport(std::move(value)); return *this;}
    inline GetRunRequest& AddExport(const RunExport& value) { m_exportHasBeenSet = true; m_export.push_back(value); return *this; }
    inline GetRunRequest& AddExport(RunExport&& value) { m_exportHasBeenSet = true; m_export.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<RunExport> m_export;
    bool m_exportHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
