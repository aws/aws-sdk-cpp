/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/StateEnum.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that includes some data about app monitors and their
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/AppMonitorSummary">AWS
   * API Reference</a></p>
   */
  class AppMonitorSummary
  {
  public:
    AWS_CLOUDWATCHRUM_API AppMonitorSummary();
    AWS_CLOUDWATCHRUM_API AppMonitorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API AppMonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the app monitor was created.</p>
     */
    inline const Aws::String& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::String& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::String&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline void SetCreated(const char* value) { m_createdHasBeenSet = true; m_created.assign(value); }
    inline AppMonitorSummary& WithCreated(const Aws::String& value) { SetCreated(value); return *this;}
    inline AppMonitorSummary& WithCreated(Aws::String&& value) { SetCreated(std::move(value)); return *this;}
    inline AppMonitorSummary& WithCreated(const char* value) { SetCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AppMonitorSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AppMonitorSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AppMonitorSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }
    inline AppMonitorSummary& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}
    inline AppMonitorSummary& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}
    inline AppMonitorSummary& WithLastModified(const char* value) { SetLastModified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this app monitor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppMonitorSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppMonitorSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppMonitorSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this app monitor.</p>
     */
    inline const StateEnum& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StateEnum& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StateEnum&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AppMonitorSummary& WithState(const StateEnum& value) { SetState(value); return *this;}
    inline AppMonitorSummary& WithState(StateEnum&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StateEnum m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
