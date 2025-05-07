$version: "2"

namespace com.amazon.awscppsdk.protocolmock

use aws.api#service
use aws.auth#sigv4
use aws.protocols#restJson1

/// Client for a AWS SDK C++ Protocol test http mock
@title("API definition for Protocol Mock")


@restJson1
@sigv4(name: "awscppsdktest")
@service(
	sdkId: "Protocol Mock",
    arnNamespace: "awscppsdktest",
	endpointPrefix: "localhost",
)
service ProtocolMock {
    version: "2025-05-05",
    operations: [
		Ping,
		Reset,
        Terminate,
		SetNextResponse,
        GetRequestsReceived
    ],
}

/// Checks if the mock server is up and running and in a valid state
@http(method: "GET", uri: "/Ping", code: 200)
@readonly
operation Ping {
    output := {
        @required
        status: Integer
    }
}

/// Resets all cached requests and preset responses in the mock server
@http(method: "PUT", uri: "/Reset", code: 200)
@idempotent
operation Reset {
    output := {
        @required
        status: Integer
    }
}

/// Terminates the mock server
@http(method: "PUT", uri: "/Terminate", code: 200)
@idempotent
operation Terminate {
    output := {
        @required
        status: Integer
    }
}

/// Sets the mocked response to be sent for all following non-control API requests
@http(method: "PUT", uri: "/SetNextResponse", code: 200)
@idempotent
operation SetNextResponse {
	input: SetNextResponseInput
    output := {
        @required
        status: Integer
    }
}

structure HttpHeader {
    @required
    key: String
    val: String
}

list Headers {
    member: HttpHeader
}

@input
structure SetNextResponseInput {
    StatusCode: Integer
	headers: Headers
    body: String
}

/// Gets back all cached received requests
@http(method: "GET", uri: "/GetRequestsReceived", code: 200)
@readonly
operation GetRequestsReceived {
	output: GetRequestsReceivedOutput
}

structure Request {
	timestamp: Timestamp
	method: String
	body: String
	uri: String
	host: String
	headers: Headers
}

list Requests {
    member: Request
}

@output
structure GetRequestsReceivedOutput {
    StatusCode: Integer
	requests: Requests
}

