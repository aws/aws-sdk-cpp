/**
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
    AWS_OMICS_API GetRunRequest() = default;

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
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetRunRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's export format.</p>
     */
    inline const Aws::Vector<RunExport>& GetExport() const { return m_export; }
    inline bool ExportHasBeenSet() const { return m_exportHasBeenSet; }
    template<typename ExportT = Aws::Vector<RunExport>>
    void SetExport(ExportT&& value) { m_exportHasBeenSet = true; m_export = std::forward<ExportT>(value); }
    template<typename ExportT = Aws::Vector<RunExport>>
    GetRunRequest& WithExport(ExportT&& value) { SetExport(std::forward<ExportT>(value)); return *this;}
    inline GetRunRequest& AddExport(RunExport value) { m_exportHasBeenSet = true; m_export.push_back(value); return *this; }
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
